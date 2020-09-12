/*
Enter your query here.
*/
SELECT city, LENGTH(city) as length_char
FROM station
ORDER BY LENGTH(city) ASC, city ASC
LIMIT 1;

SELECT city, LENGTH(city) as length_char
FROM station
ORDER BY LENGTH(city) DESC
LIMIT 1;
