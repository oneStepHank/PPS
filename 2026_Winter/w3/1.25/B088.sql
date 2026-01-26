# offset : 건너뛸 entry 개수
select (select DISTINCT salary 
from Employee order by salary desc limit 1 offset 1) as SecondHighestSalary ;
-- 스칼라 서브쿼리는 반드시 한 개의 행과 한 개의 열만 반환해야 하는 서브쿼리