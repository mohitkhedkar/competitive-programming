/*
Enter your query here.
*/

SELECT H.hacker_id, H.name
FROM SUBMISSIONS S
JOIN CHALLENGES C
 ON S.challenge_id = C.challenge_id
JOIN HACKERS H
 ON H.hacker_id = S.hacker_id
JOIN DIFFICULTY D
 ON C.difficulty_level = D.difficulty_level
WHERE D.score = S.score and D.difficulty_level = C.difficulty_level
GROUP BY H.hacker_id, H.name
HAVING COUNT(S.hacker_id) > 1
    ORDER BY COUNT(S.hacker_id) DESC, S.hacker_id ASC