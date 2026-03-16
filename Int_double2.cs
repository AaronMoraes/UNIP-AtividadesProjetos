using System;
					
public class Program
{
	public static void Main()
	{
		// Declaração das variáveis
		int a = 1;
		int b = 12;
		int c = -13;
		
		// Calcula os valores delta, x' e x'':
		// delta = b² - 4*a*c;
		// x'    = (-b + raiz(delta)) / (2 * a);
		// x''   = (-b - raiz(delta)) / (2 * a);
		double delta =  Math.Pow(b, 2) - (4*a*c);
		
		if(delta < 0) {
			Console.WriteLine("Delta negativo, calculo interrompido.");
		} else {
			double x1 = (-b + Math.Sqrt(delta)) / (2 * a);
			double x2 = (-b - Math.Sqrt(delta)) / (2 * a);

			// Impressão dos resultados
			Console.WriteLine("delta={0}; x'={1}; x''={2};", delta, x1, x2);
		}
	}
