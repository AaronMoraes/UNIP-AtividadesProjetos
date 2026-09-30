using System;

public class Animal { }

public class Cachorro : Animal
{
    public void Trazer()
    {
        Console.WriteLine("O cachorro está trazendo o objeto!");
    }
}

public class Gato : Animal
{
    public void Ronronar()
    {
        Console.WriteLine("O gato está ronronando!");
    }
}

public class Program
{
    public static void Main()
    {
        Animal animal = new Cachorro();

        // CAST direto (pode dar erro se tipo errado!)
        Cachorro dog = (Cachorro)animal; // OK
        dog.Trazer(); // Agora funciona!

        // Se tipo errado, dá ERRO em runtime
        // Gato gatoErro = (Gato)animal; // InvalidCastException

        // CAST SEGURO (AS)
        Cachorro dogSeguro = animal as Cachorro;
        if (dogSeguro != null)
        {
            dogSeguro.Trazer(); // Seguro
        }

        Gato gato = animal as Gato;
        if (gato != null)
        {
            gato.Ronronar();
        }
        else
        {
            Console.WriteLine("Não é um Gato!"); // Executa
        }
    }
}