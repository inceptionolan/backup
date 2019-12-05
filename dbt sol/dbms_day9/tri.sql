DROP TRIGGER IF EXISTS tri_karn;

DELIMITER $$

CREATE TRIGGER tri_karn
AFTER INSERT ON accounts
FOR EACH ROW

BEGIN
	INSERT INTO trans (accid,type,amount,txtime) VALUES (NEW.id,'DEPOSITE',NEW.balance,now());
END;

$$
DELIMITER ;









