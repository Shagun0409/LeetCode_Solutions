# Write your MySQL query statement below
SELECT P.PRODUCT_NAME,year,PRICE FROM SALES  S  INNER JOIN PRODUCT AS P ON S.PRODUCT_ID=P.PRODUCT_ID;