# Write your MySQL query statement below
(
    select Users.name as results
    from Users 
    join MovieRating
    on Users.user_id= MovieRating.user_id
    group by Users.user_id,Users.name
    order by count(*) DESC, Users.name Asc
    limit 1
)

Union all

(select t1.title as results
from Movies t1
join MovieRating t2
on t1.movie_id = t2.movie_id
where t2.created_at between '2020-02-01' and '2020-02-29'
group by t1.movie_id, t1.title
order by avg(t2.rating) DESC, t1.title ASC
limit 1)