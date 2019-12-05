/*
Print table of given number.
*/

DROP PROCEDURE IF EXISTS sp_repeat;

DELIMITER $$

CREATE PROCEDURE sp_repeat(p_num INT)
BEGIN
	DECLARE v_i INT DEFAULT 1;
	
	REPEAT
		INSERT INTO results VALUES (v_i * p_num, NULL);
		SET v_i = v_i + 1;
	UNTIL v_i > 10
	END REPEAT;
END;
$$

DELIMITER ;





