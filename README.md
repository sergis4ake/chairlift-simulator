# chairlift-simulator
Chairlift simulator with C++ queue data structure.

## Objetivo
El objetivo de esta práctica es simular el funcionamiento de uno de los telesillas de una estación de esquí. Dicha estación consta de varias pistas con dificultad graduada desde Verde (muy fácil) a Negra (muy difícil) siendo las pistas Verdes las más demandadas entre los esquiadores noveles. En esta práctica se simulará el funcionamiento de un telesilla de una pista de estas características.

## Implementación
En la presente práctica se debe modelar el comportamiento del sistema de carga de acuerdo a las siguientes normas:

* Se modelará la zona entre los tornos y las góndolas como cinco colas independientes.
* Se modelará el telesilla como una cola cuya entrada se sitúa en el acceso a las góndolas y la salida se sitúa en la parte alta de la pista donde desmontan los esquiadores. Para simplificar la simulación se considerarán 10 góndolas.
* Se implementarán los TAD's necesarios usando memoria dinámica cuando sea
necesario.
* Se crearan aleatoriamente N esquiadores distinguiendo dos categorías (niño y adulto) que se irán situando, de forma también aleatoria, en la zona que se modela a medida que se crean.
* Se debe proponer un mecanismo para controlar el acceso de los niños a las góndolas, evitando que monten cuatro niños de forma simultánea.
* Para simplificar el programa, se asumirá que se llenan todas y cada una de las góndolas en la zona de acceso.
* Con el objetivo de monitorizar el sistema, se debe mostrar en cada momento el estado de las colas de acceso a la góndola (proporcionando información acerca de los cinco esquiadores que montan) y del estado del telesilla (proporcionando información de la composición de cada una de las góndolas hasta que se vacían).
