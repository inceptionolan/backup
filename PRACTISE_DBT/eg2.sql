/*
Print Hello World on client CLI.
*/

DROP PROCEDURE IF EXISTS sp_hello2;

DELIMITER $$

CREATE PROCEDURE sp_hello2()
BEGIN
	SELECT 'Hello World!!!' AS v2 FROM DUAL;
END;
$$

DELIMITER ;

