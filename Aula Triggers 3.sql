CREATE TABLE Cliente (
id INT NOT NULL AUTO_INCREMENT,
nome VARCHAR(255) NOT NULL,
cpf CHAR(14) NOT NULL UNIQUE,
ativo CHAR(1) NOT NULL DEFAULT 'A',
CONSTRAINT pk_cliente 
PRIMARY KEY(id)
);

CREATE TABLE Conta_receber(
id INT NOT NULL auto_increment,
valor DECIMAL(10,2) NOT NULL,
cliente_id INT NOT NULL,
constraint pk_conta_receber
PRIMARY KEY(id)
);