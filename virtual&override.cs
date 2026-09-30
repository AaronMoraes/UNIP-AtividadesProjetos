//Virtual: Classe PAI
public class Animal
{
    public virtual void FazerSom()
    {
        Console.WriteLine("Som genérico");
    }
    //virtual = "Isso PODE ser Mudado"
}

//OVERRIDE: Classe FILHA
public class Cachorro: Animal
{
    public override void FazerSom()
    {
        Console.WriteLine("AU, AU, AU!");
    }
    //override: "Estou MUDANDO isso"
}

//VIRTUAL: PERMITE
//OVERRIDE: IMPLEMENTA
