# Write your MySQL query statement below
SELECT c.name AS Customers
FROM customers c
LEFT JOIN orders o
ON c.id = o.customerID
WHERE o.customerID IS NULL;
