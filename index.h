<!DOCTYPE html>
<html lang="es">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Zuri ❤️</title>

<style>
*{
    margin:0;
    padding:0;
    box-sizing:border-box;
    font-family:Arial, Helvetica, sans-serif;
}

body{
    min-height:100vh;
    display:flex;
    justify-content:center;
    align-items:center;
    flex-direction:column;
    overflow:hidden;
    background:linear-gradient(135deg,#ff8fcf,#d46cff,#ffb6d9);
    background-size:400% 400%;
    animation:fondo 10s ease infinite;
}

@keyframes fondo{
0%{background-position:0% 50%;}
50%{background-position:100% 50%;}
100%{background-position:0% 50%;}
}

h1{
    color:white;
    font-size:70px;
    margin-bottom:40px;
    text-shadow:0 0 20px hotpink;
    letter-spacing:8px;
}

.carta{
    width:320px;
    min-height:220px;
    background:#ff8fb9;
    border-radius:20px;
    cursor:pointer;
    display:flex;
    justify-content:center;
    align-items:center;
    text-align:center;
    padding:25px;
    color:white;
    font-size:26px;
    font-weight:bold;
    box-shadow:0 15px 35px rgba(0,0,0,.3);
    transition:.5s;
    user-select:none;
}

.carta:hover{
    transform:scale(1.05);
}

.poema{
    font-size:21px;
    line-height:1.6;
    animation:aparecer .6s;
}

@keyframes aparecer{
from{
opacity:0;
transform:scale(.8);
}
to{
opacity:1;
transform:scale(1);
}
}

.corazon{
position:absolute;
font-size:25px;
animation:caer linear infinite;
opacity:.8;
}

@keyframes caer{
0%{
transform:translateY(-100px);
}
100%{
transform:translateY(110vh);
}
}
</style>

</head>
<body>

<h1>ZURI 💖</h1>

<div class="carta" id="carta">
💌<br><br>
Para Zuri
</div>

<script>

const poemas=[

"🌸 Zuri, tu nombre florece como un jardín lleno de esperanza. Cada vez que sonríes, el mundo parece llenarse de colores nuevos. 💖",

"💜 Si las estrellas pudieran hablar, pronunciarían tu nombre una y otra vez. Porque Zuri brilla incluso más que el cielo. ✨",

"🌹 Tu sonrisa convierte cualquier día gris en una tarde llena de primavera. Gracias por existir. 💕",

"🦋 Zuri, eres la calma que encuentra mi corazón cuando todo parece difícil. Contigo todo se siente mejor. ❤️",

"🌷 Dicen que las flores son hermosas, pero nunca conocieron a alguien que llevara el nombre de Zuri. 🌸",

"🌙 La luna ilumina las noches, pero tú iluminas mi vida completa. 💖",

"☀️ Si pudiera elegir un lugar para vivir, sería donde siempre pudiera ver tu sonrisa. 😊",

"💌 Tu nombre es corto, pero la felicidad que provoca en mí es infinita. ❤️",

"🌺 Cada latido de mi corazón parece escribir una carta que lleva tu nombre: Zuri. 💗",

"✨ Entre millones de personas, mis ojos siempre elegirían encontrarte a ti. 💞",

"🌹 Eres ese pequeño milagro que convierte los momentos simples en recuerdos inolvidables. 🥰",

"🩷 Cuando pienso en felicidad, inevitablemente pienso en ti. Porque tú eres parte de ella. 🌸",

"💜 Zuri, cada día contigo es como leer el capítulo favorito de un libro que nunca quiero terminar. 📖❤️",

"🌼 Si el amor tuviera un color, seguramente sería el mismo que aparece cuando tú sonríes. 💕",

"🦋 Tu nombre viaja por mi mente como una canción bonita que nunca deja de sonar. 🎶💖",

"🌸 Hay personas que pasan por la vida... y hay personas como tú, que hacen que la vida realmente valga la pena. ❤️",

"💫 El universo tiene millones de estrellas, pero mi favorita siempre será la que lleva tu nombre: Zuri. ✨",

"🌷 No necesito pedir deseos cuando aparece una estrella, porque el mejor deseo ya existe y eres tú. 💖",

"💕 Si pudiera regalarte algo eterno, sería la manera en que mi corazón sonríe cuando pienso en ti. 😊",

"💖 Zuri... gracias por existir. Tu nombre ya es un poema, pero conocerte hace que cada día sea la poesía más bonita de todas. 🌹"

];

const carta=document.getElementById("carta");

let ultimo=-1;

carta.onclick=()=>{

let numero;

do{
numero=Math.floor(Math.random()*poemas.length);
}while(numero===ultimo);

ultimo=numero;

carta.innerHTML='<div class="poema">'+poemas[numero]+'</div>';

}

function crearCorazon(){

const corazones=["💖","💕","💗","💜","💞","🌸","✨"];

const c=document.createElement("div");

c.className="corazon";

c.innerHTML=corazones[Math.floor(Math.random()*corazones.length)];

c.style.left=Math.random()*100+"vw";

c.style.animationDuration=(4+Math.random()*6)+"s";

c.style.fontSize=(20+Math.random()*20)+"px";

document.body.appendChild(c);

setTimeout(()=>{
c.remove();
},10000);

}

setInterval(crearCorazon,350);

</script>

</body>
</html>
