##Tiggers

CREATE DATABASE Tiggers;
USE Tiggers;

CREATE TABLE Produto(
idproduto INT NOT NULL auto_increment,
nome_produto VARCHAR(50),
preco_normal decimal(10,2),
preco_desconto decimal(10,2),
primary key(idproduto)
);

CREATE TRIGGER tr_desconto
BEFORE INSERT
ON produto
FOR EACH ROW
SET NEW.preco_desconto = NEW.preco_normal * 0.90;

INSERT INTO produto (nome_produto, preco_normal)
VALUES
('Gabinete', 35),
('Monitor', 40),
('Fonte', 20);

CREATE TRIGGER tr_atua1
BEFORE UPDATE
ON produto
FOR EACH ROW
SET NEW.preco_desconto = NEW.preco_normal * 0.75;

UPDATE produto
SET preco_normal = 700.00
WHERE idproduto = 2;

SHOW TRIGGERS;

SELECT * FROM Produto;



