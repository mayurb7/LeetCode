# Write your MySQL query statement below

SELECT employee_id,
    Case 
        WHEN Left(name,1) != 'M' and employee_id%2 = 1  THEN salary
        ELSE 0
    END 
    as bonus
From Employees
order by employee_id;