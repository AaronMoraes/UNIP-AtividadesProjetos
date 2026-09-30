using System;

public class Program
{
    public static void Main ()
    {
        int idadeJoao = 18;
        int idadeMaria = 25;
        int idadeMaisUmaPessoa = 34;

        double media = (idadeJoao + idadeMaria + idadeMaisUmaPessoa) / 3;

        Console.WriteLine("A media é de: {0:0.00} ", media);
    }
}

