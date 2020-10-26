/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SELECT HACKER_ID,
       NAME,
       SUM(A)
FROM
  (SELECT S.HACKER_ID,
          H.NAME,
          MAX(S.SCORE) A
   FROM SUBMISSIONS S
   INNER JOIN HACKERS H ON H.HACKER_ID=S.HACKER_ID
   WHERE S.SCORE!=0
   GROUP BY S.HACKER_ID,
            H.NAME,
            S.CHALLENGE_ID)
GROUP BY HACKER_ID,
         NAME
ORDER BY 3 DESC,
         1;