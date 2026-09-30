using System;
					
public class Program
{
	public static void Main()
	{
		double saldo = 100000000.004;

		// Verifica se o cliente possui saldo negativo
		if (saldo < 0) 
		{
			Console.WriteLine("Você está no vermelho!");
		}
		// Senão (valor naõ é negativo), verifica se ele possui saldo menor que 1 milhão
		else if (saldo < 1000000) 
		{
			Console.WriteLine("Você está no azul!");
		}
		// Senão (valor não é negativo e não é menor que 1 milhão), ou seja, 
        // é igual ou maior que 1 milhão
		else 
		{
			Console.WriteLine("Você está bem demais!");
		}
		
		Console.WriteLine("R$ {0:0.00}", saldo);
	}
}
