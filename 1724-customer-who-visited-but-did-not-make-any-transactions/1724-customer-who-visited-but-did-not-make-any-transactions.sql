# Write your MySQL query statement below
select customer_id, count(*) as count_no_trans
from visits t1
left join Transactions t2
on t1.visit_id=t2.visit_id
where transaction_id is null
group by customer_id;