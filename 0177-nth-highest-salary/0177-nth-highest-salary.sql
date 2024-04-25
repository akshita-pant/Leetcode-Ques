CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE result INT;
SET N=N-1; -- aisa isliye becoz LIMIT starts from 0...
SET result=
    (SELECT DISTINCT salary
    from Employee
    order by salary DESC
    LIMIT N,1); -- is descending order me jo sequence hai usme start fom Nth pos & only 1 no.
RETURN result;
END