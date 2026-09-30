using System;

public class Animal
{
    public virtual void FazerSom() // VIRTUAL
    {
        Console.WriteLine("Som");
    }
}

public class Gato : Animal
{
    public override void FazerSom() // OVERRIDE
    {
        Console.WriteLine("MIAU!");
    }
}

public class Program
{
    public static void Main()
    {
        Animal animal = new Gato();
        animal.FazerSom(); // MIAU! (Polimorfismo!)
    }
}