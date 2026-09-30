
public abstract class Veiculo
{
    public abstract void Acelerar(); //Obrigatório
    public void Parar() //Não é obrigatório
    {
    Console.WriteLine("Parando...");
    }
}

public class Carro: Veiculo
{
    public override void Acelerar() //Obrigatório!!
    {
        Console.WriteLine("Carro Acelerou!");
    }
}

public class Bicicleta: Veiculo
{
    public override void Acelerar() //Obrigatório
    {
        Console.WriteLine("Bicicleta acelerou!");
    }
}


//abstract = CONTRATO(obrigatório)
//virtual = FLEXIVEL(opcional)