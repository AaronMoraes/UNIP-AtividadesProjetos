using System;

public class Program
{
	public static void Main()
	{
		// Criar duas instancias do tipo Conta.
		Conta c1 = new Conta();
		Conta c2 = new Conta();
		
		// Deposita R$100.
		c1.Depositar(100);
		
		// Faz c1 e c2 terem a mesma referência (endereco de memoria).
		c2 = c1;
		
		// Imprime o saldo de ambos os objetos.
		Console.WriteLine(c1.saldo);
		Console.WriteLine(c2.saldo);
		
		// Deposita R$100 com R$5 de taxa.
		c2.Depositar(50, 5);
		
		// Imprime o saldo de ambos os objetos.
		Console.WriteLine(c1.saldo);
		Console.WriteLine(c2.saldo);
		
		// Cria uma nova instância para c2, dando a ela um novo endereco de memoria.
		c2 = new Conta();
		
		// Imprime o saldo de ambos os objetos.
		Console.WriteLine(c1.saldo);
		Console.WriteLine(c2.saldo);
	}
}

public class Conta
{
	public double saldo;
	
	public void Depositar(double valor)
	{
		saldo += valor;
	}

	public void Depositar(double valor, double taxa)
	{
		saldo += (valor - taxa);
	}

}
