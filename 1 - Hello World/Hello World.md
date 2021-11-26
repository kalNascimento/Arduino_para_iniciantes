<h1 align="center"> <b>Criando seu primeiro programa para Arduino </b></h1></br>

#

<b><h2> Material: </h2></b>

<p> Um Arduino, cabo USB do Arduino, protoboard, resistor 150ohns, led de qualquer cor.
Para fazer um programa p/ o Arduino e testa-lo precisaremos da <b>Arduino IDE</b> e do simulador de Arduino <b>TinkerCad</b>. </br> No caso de Arduinos paralelos precisa instalar um driver chamado CH340 </p>
</br>

#

<b><h2> Downloads </h3></b>

<a href="https://www.arduino.cc/en/software"> Arduino IDE </a>

<a href="https://www.tinkercad.com"> TinkerCad </a></b>

<a href="https://www.google.com/amp/s/www.blogdarobotica.com/2020/03/21/instalando-driver-serial-para-arduinos-com-chip-ch340/amp/"> Driver CH340 </a></br></br>

#
<b><h3> O que é um Arduino </h2></b>

#

Arduino é uma plataforma de prototipagem criada com o objetivo de facilitar o ensino de programação e eletrônica p/ jovens. Pela facilidade foi adotado pela comunidade do “faça você mesmo”.
(Foto do Arduino)
Ele possuí um conector P4 para alimentação, podendo receber até no máximo 9V e no mínimo 5V; Um conector USB tipo B por onde o Arduino é gravado; e os conectores de barra que são por onde acessamos as entradas e saída do Arduino.
<p align="center">
<img src="./../source/hello_world/arduino.png" width=349 height=285></p></br></br>

#
<b><h3> O que é uma Protoboard </b></h3>

#

<p>Protoboard ou placa de ensaio é uma placa com orifício utilizada para montar circuitos eletrônicos.
(Foto com o esquema de ligação)
As orifícios em linha estão conectados, as colunas não.</p>

<p align="center">
<img src="./../source/hello_world/protoboard.png" width=213 height=313></p></br></br>

#
<b><h3> O que é um Resistor </b></h3>

#

<p>O resistor é um dos componentes mais básicos da eletrônica e sua função é resistir a passagem de energia transformando eletricidade em energia térmica.
Os valores de resistência são determinados pelas listras coloridas em seu corpo, cada linha tem um valor e esse valor pode ser encontrado na tabela.
O que é um #Led
O led, sigla p/ light emmiting diode, ou diodo emissor de luz é um componente eletrônico que em resumo emite luz quando atravessado pela energia elétrica.</p>

<p align="center">
<img src="./../source/hello_world/resistor.png" width=269 height=110><p/></br></br>


<h1 align="center"> <b>  Iniciando</b> </h1>


<p align="center"> Após a instalação do <b>Arduino IDE</b> e do driver CH340 podemos iniciar o equivalente ao “hello world” do Arduino, o programa Blink.</p>

<h2 align="center"> <b> Inicialize o <b>Arduino IDE</b> </b></h2>

<p align="center">
<img src="./../source/hello_world/1_abrir_ide.png" width=364 height=489></p></br>

<h2 align="center"> <b> Vá em Arquivo -> Abrir </b></h2>

<p align="center">
<img src="./../source/hello_world/2_abrir_programa.png" width=364 height=489></p></br></br>


<h2 align="center"> <b> Encontre o Código Hello World Comentado dentro dos arquivos da aula </b></h2>

<p align="center">
<img src="./../source/hello_world/3_buscar_arquivo.png" width=485 height=342></p></br></br>

<p align="center">
<img src="./../source/hello_world/4_buscar_arquivo.png" width=485 height=342></p></br></br>

<p align="center">
<img src="./../source/hello_world/5_buscar_arquivo.png" width=485 height=342></p></br></br>


<h2 align="center"> <b> Esse código aparecerá no seu Arduino IDE </b></h2>

<p align="center">
<img src="./../source/hello_world/6_programa_aberto.png" width=488 height=680></p></br></br>

<h2 align="center"> <b> Agora vamos para o circuito onde testaremos o código </b></h2>

<p align="center"> Crie um conta no <b>Tinkercad</b> e quando clickar no link do  <a href="https://www.tinkercad.com/things/aVVz9ZVGPe6"> Circuito no Tinkercad </a> você será direcionado a uma pagina no tinkercad. </p></br>

<p align="center">
<img src="./../source/hello_world/7_tinkercad.png" width=1038 height=523></p></br></br>


<p align="center"> Quando a pagina carregar, no canto esquedo aparece para <b> Copiar e usar </b>, clickando ai ele vai redirecionar para a página do circuito.</p>
</br>
<p align="center">
<img src="./../source/hello_world/8_oq%20fazer_tinkercad.png" width=498 height=311></p></br></br>


<p align="center"> Você vera essa tela</p>
</br>
<p align="center">
<img src="./Hello_World/../../source/hello_world/9_circuito_tinkercad.png" width=1342 height=575></p></br></br>

<p align="center"> No canto superior esquerdo click em <b>Blocos</b> ele abrira um onde você escolherá a opção <b>Texto</b></p>
</br>
<p align="center">
<img src="./Hello_World/../../source/hello_world/10_circuito_tinkercad.png" width=682 height=894></p></br></br>
<p align="center">
<img src="./Hello_World/../../source/hello_world/11_circuito_tinkercad.png" width=682 height=894></p></br></br>

<p align="center"> Apague o código que está escrito, vá ao <b>Arduino IDE</b> e copie o código que você abriu anteriormente e cole no lugar onde estava o que vc apagou</p>
</br>
<p align="center">
<img src="./../source/hello_world/12_circuito_tinkercad.png" width=1127 height=551></p>
<p align="center"> Ficará assim</p></br></br>

<p align="center"> Click em <b>Iniciar simulação</b> e pronto você verá os leds acendendo e apagando igual no seu código</p>
</br>
<p align="center">
<img src="./../source/hello_world/13_circuito_tinkercad.png" width=698 height=248></p></br></br>

<p align="center"> Faça alterações no código mudando os tempos do delay ou qual led vai ser aceso primeiro</p>

</br></br>

<p align="center">
<a href="https://github.com/kalNascimento/Arduino_para_iniciantes">Inicio</a>
</p>
