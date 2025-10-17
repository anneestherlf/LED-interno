// Projeto arduino pisca led

void setup() { // Executado sempre que o programa é iniciado (executado apenas uma vez)
  pinMode(10, OUTPUT); // O pino 10 do arduino será um pino de saída (fornecerá a energia para o led piscar)
}

void loop() { // Executado durante todo o período em que o arduino está ligado
  digitalWrite(10, HIGH); // Manda para a porta 10 o valor máximo (de energia, para acender o led)
  delay(100); // Comando de espera, aguarda 1 segundo ou 1000 milisegundos
  digitalWrite(10, LOW); // Tira energia da porta 10
  delay(100); // Espera mais 1 segundo
}
