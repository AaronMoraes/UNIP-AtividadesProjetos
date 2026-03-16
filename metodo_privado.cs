public void Depositar(double valor) {
saldo += valor;
DescontarTarifa();
}

public void Sacar(double valor) {
saldo -= valor;
DescontarTarifa();
}

private void DescontarTarifa() {
saldo -= 0.10;
}
