using System;

public class Animal { }

public class Cachorro : Animal { }

public class Gato : Animal { }

public class Program
{
    public static void Main()
    {
        Cachorro dog = new Cachorro();
        Animal animal = dog;

        // Verificar tipo
        if (animal is Cachorro)
        {
            Console.WriteLine("É um Cachorro!"); // Executa
        }

        if (animal is Gato)
        {
            Console.WriteLine("É um Gato!"); // Não executa
        }

        // IS retorna bool
        bool ehCachorro = animal is Cachorro; // true
        bool ehGato = animal is Gato;         // false

        // Verificação simples
        // Quando quer apenas saber o tipo
        Console.WriteLine($"ehCachorro: {ehCachorro}");
        Console.WriteLine($"ehGato: {ehGato}");
    }
}