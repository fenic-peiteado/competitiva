# Teorema fundamental de la programción estructurada

## Condicional


### Pregunta 74
**Enunciado:**  ¿Que almacena la variable s?

**Repuesta:** Para este problema no se puede determinar el contenido de s
sin conocer las variables m_score y n_score y al final depediendo del valor
s contiene al ganador del mayor valor y si no lo declara como empate

---
## Pregunta 75
**Enunciado:** Que significado tiene el condicional como predicado

**Repuesta:** si el valor de y_score es menor que 10, entonces la cadena "You lose" se imprimirá en la salida estándar. Si y_score no es menor que 10, no se ejecutará la instrucción puts, y no se mostrará "You lose". Esto permite mostrar un mensaje específico cuando se cumple una cierta condición.

---

## Pregunta 76
**Enunciado:** ¿Es obligarorio el uso de la palabra reservada then?

**Repuesta:** No

-----

## Asignación

## Pregunta 41
=======


### Pregunta 41


**Enunciado:** ¿Que diferencia hay entre "\t\n" y ’\t\n’?


**Repuesta:** Para las comillas doble el \t y \n representa caracteres especiales y para la comillas simple son caracteres literales



---

### Pregunta 42

**Enunciado:** ¿Como funciona %q?



**Repuesta:** El operador %q en Ruby se utiliza para crear cadenas literales delimitadas por llaves {} o paréntesis (), y se comporta de manera similar a las comillas simples ('')



**Enunciado:** ¿Que es %q{hello world\n}?



**Repuesta:** %q{hello world\n} crea una cadena literal que contiene los caracteres "hello world\n". La secuencia \n se trata como texto literal y no se interpreta como un carácter de nueva línea.



**Enunciado:** ¿Que es %q{’a’ ’b’ ’c’}?



**Repuesta:** Al tener %q todo lo que esta adentro de la llaves es literal por tanto el contenido es : 'a' 'b' 'c' porque la comilla simple se intepreta como literal




---

### Pregunta 43

**Enunciado:** ¿Como funciona %Q?

**Repuesta:** es una forma de crear una cadena de texto (string) que funciona de manera similar a las comillas dobles, pero te permite usar otros delimitadores en lugar de comillas.



**Enunciado:** ¿Que es %Q{hello world\n}?



**Repuesta:** crea una cadena que contiene "hello world" y un salto de línea. La secuencia \n se interpreta como un salto de línea en el string



**Enunciado:** ¿Que es %Q{"a" "b" "c"}?



**Repuesta:** crea una cadena que contiene el texto "a" "b" "c". Aquí, las comillas dobles no se interpretan como delimitadores del string, sino como parte del contenido del string




---



### Pregunta 44

**Enunciado:** ¿Que queda en c?



**Repuesta:** "--4--\n--2--\n"



---



### Pregunta 45

**Enunciado:** ¿Que queda en c?




**Repuesta:** "'--\#{a}--\n'--\#{b}--\n"



---

### Pregunta 46

**Enunciado:** Cual es el valor para la expresion [0,2]



**Repuesta:** "he"



**Enunciado:** Cual es el valor para la expresion s[-1,1]



**Repuesta:** "o"




**Enunciado:** Cual es el valor para la expresion s[0,10]




**Repuesta:** "hello"




--



### Pregunta 47

**Enunciado:** ¿Que queda en g?




**Repuesta:** "helloworld"



---



### Pregunta 48

**Enunciado:** ¿Que queda en e?




**Repuesta:** "..."



---



### Pregunta 49

**Enunciado:** ¿Cual es el resultado?





**Repuesta:** "222"



---



### Pregunta 50

**Enunciado:** ¿Que es esto? %w[this is a test]




**Repuesta:** El comando %w es un atajo para crear un arreglo de palabras los elementos separado pro espacio, la salida es : *["this", "is", "a", "test"]*



---



### Pregunta 51

**Enunciado:** ¿Que es esto %w[\t \n]?




**Repuesta:** Convierte el string en un arreglo con los caracteres no se intepreta por lo que \t \n son eso caracteres literales y por tanto se capan con un \ y su salida es : *["\\t", "\\n"]*



---




### Pregunta 52

**Enunciado:** ¿Que es esto? %W[\t \n]?




**Repuesta:** Para este caso lo convierte en un arreglo igual que el anterior pero con una diferencia importante que puede contener interpolacion variables y caracteres de escape que se interpretan y su salida es : *["\t", "\n"]*



---



### Pregunta 53

**Enunciado:** ¿Que contiene nils? nils = Array.new(3)




**Repuesta:** [nil, nil, nil]



---




### Pregunta 54

**Enunciado:** ¿Que contiene zeros? zeros = Array.new(3, 0)?




**Repuesta:** [0, 0, 0]



---




### Pregunta 55

**Enunciado:** ¿Que queda en b?




**Repuesta:** [[1, 2], [3, 4]]



---



### Pregunta 56

**Enunciado:** ¿Que queda en c?




**Repuesta:** [0, 2, 4]



---




### Pregunta 57

**Enunciado:** ¿Cual es el resultado de cada una de estas operaciones?




**Repuesta:**

*  **a[1,1]**: ["b"]

*  **a[-2,2]**: ["d", "e"]

*  **a[0..2]**: ["a", "b"]

*  **a[0...1]**: ["a"]

*  **a[-2..-1]**: []



---




### Pregunta 58

**Enunciado:** ¿Cual es el resultado de cada una de estas operaciones?


**Repuesta:** ""
*  **a**: ["A", "B", "c", "d", "e"]

*  **a**: ["A", "B", "C", "D", "E"]

*  **a**: [1, 2, 3, "A", "B", "C", "D", "E"]

*  **a**: [3, "A", "B", "C", "D", "E"]

*  **a**: [3, "A", "B", "C", "D", "Z"]

*  **a**: [3, "A", "B", "C", nil]

---


### Pregunta 59

**Enunciado:** ¿Cual es el resultado de cada una de estas operaciones?




**Repuesta:**

*  **a = (1..4).to_a**: [1,2,3]

*  **a = a +[4,5]**: [1,2,3,4,5]

*  **a += [[6,7,8]]**: [1, 2, 3, 4, 5, [6, 7, 8]]


---



### Pregunta 60

**Enunciado:** ¿Cual es el resultado de cada una de estas operaciones?



**Repuesta:** ["a", "b", "c", "b", "a"]


---



### Pregunta 61

**Enunciado:** ¿cual es el resultado de cada un de esta operaciones?

**Repuesta:**  [0, 0, 0, 0, 0, 0, 0, 0]


---



### Pregunta x

**Enunciado:** ¿?




**Repuesta:** ""



