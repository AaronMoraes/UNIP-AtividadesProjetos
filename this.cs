using System;

public class Pessoa
{
    public string Nome { get; set; }

    public void Apresentar()
    {
        Console.WriteLine("Meu nome é " + this.Nome);
    }
}

class Program
{
    static void Main()
    {
        Pessoa p = new Pessoa { Nome = "João" };
        p.Apresentar(); //Output: Meu nome é João
    }
}