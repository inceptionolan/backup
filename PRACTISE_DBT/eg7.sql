

DROP PROCEDURE IF EXISTS sp_classifyemp2;

DELIMITER $$

CREATE PROCEDURE sp_classifyemp2(p_id INT)
BEGIN
	DECLARE v_sal DOUBLE;
	DECLARE v_status VARCHAR(40);
	
	SELECT sal INTO v_sal FROM EMP WHERE empno=p_id;
	
	IF v_sal < 1500.00 THEN
		SET v_status = 'Lower class';
	ELSEIF v_sal < 2500.00 THEN
		SET v_status = 'Middle class';
	ELSE
		SET v_status = 'Higher class';
	END IF;
	
	INSERT INTO results VALUES (v_sal, v_status);		
END;
$$

DELIMITER ;

