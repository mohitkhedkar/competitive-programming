/*
Enter your query here.
*/

SELECT Months * Salary AS earnings, COUNT(*)
FROM Employee
GROUP BY earnings
ORDER BY earnings DESC
LIMIT 1;