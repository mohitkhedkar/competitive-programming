/*
Enter your query here.
*/
SELECT DISTINCT City
FROM Station
WHERE REGEXP_LIKE(City, '[^aeiou]$');