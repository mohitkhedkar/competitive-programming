/*
Enter your query here.
*/

SELECT W.id, P.age, W.coins_needed, W.power
FROM Wands W
JOIN Wands_Property P 
ON W.code = P.code
WHERE P.is_evil = 0 and w.coins_needed = (SELECT MIN(w1.coins_needed)
                                         FROM WANDS W1
                                         JOIN WANDS_PROPERTY P1
                                         ON W1.code = P1.code
                                         WHERE W1.power = W.power and P1.age = P.age)
ORDER BY W.power DESC, P.age DESC;