# Write your MySQL query statement below
select e.employee_id,if((e.employee_id%2 and left(e.name,1)!='M'),e.salary,0) as bonus
from Employees e
order by e.employee_id