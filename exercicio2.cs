using System;

public class Program 
{
    public static void Main () 
    {
        double pi = 3.14;
        int piParteInteira = (int) pi;
        Console.WriteLine("piParteInteira = " + piParteInteira);
    }
}

/*O int esta sendo forçado a converter o double para um inteiro.
Isso se chama "casting". O C# aceita só quando você mesmo se resposabiliza pela perda! */
