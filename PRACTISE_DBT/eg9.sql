


DROP PROCEDURE IF EXISTS sp_while;

DELIMITER $$

CREATE PROCEDURE sp_while()   
BEGIN
	declare v_i int default 1;
        while v_i<= 5 do
       insert into results (string) values(concat('dac',v_i));
       set v_i = v_i + 1;
       end while;
END;
$$

DELIMITER ;







