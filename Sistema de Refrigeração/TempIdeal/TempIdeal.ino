

// Este é o TempIdeal
// Autor: Rodrigo Carlos
// E-mail: rodrigo19962010@live.com

int temperaturaObjetivo;
// Temperatura de resfriamento desejada

unsigned long tempoAnterior = 0;
// Tempo anterior usado

unsigned long tempoMaximo = 1000;
// Tempo máximo de execução de cada análise

void setup() {
  // Inicialização
  Serial.begin(9600);
}

void loop() {
  // Execução contínua

  unsigned long tempoAtual = millis();
  // Tempo atual em milissegundos
  
  int temperaturaAtual;
  // Nesta variável, temos a temperatura atual do ambiente que vai recebida a partir do sensor

  // Estrutura de condicionais para se escolher o nível de ventilação
  if((temperaturaAtual-temperaturaObjetivo)>10){
    // ligar ventilador máximo
  }
  else if((temperaturaAtual-temperaturaObjetivo)>5){
    // ligar ventilador médio
  }
  else if((temperaturaAtual-temperaturaObjetivo)>=0){
    // ligar ventilador pequeno
  }
  else{
    // Pode-se economizar energia com desligamento temporário do ventilador
    // Aqui temos a economia de energia!
  }

  while(tempoAtual-tempoAnterior<tempoMaximo){
    // Termina somente quando passar 1 segundo
    tempoAtual = millis();
  }
  
}
