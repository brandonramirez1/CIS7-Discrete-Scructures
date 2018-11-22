```Part 1```  
If mathmatics is easy then the homework is done and if it is sunny then camping is fun.  
```Part 2```  
```
(¬B → ¬A) → ((¬B → A) → B)
```

| A | B | ¬A | ¬B | ¬B -> ¬A | ¬B -> A | ((¬B -> A) -> B
|---|---|--- |--- | -------- | ------- | ---------------
| T | T | F  | F  | T        |         |
| T | F | F  | T  | F        |         |
| F | T | T  | F  | T        |         |
| F | F | T  | T  | T        |         |
  
 ```Part 3```  
(p ∧ q) → r , p → (q → r ) triple implication  
¬(p ∧ q) v r , ¬p v (¬q v r ) demorgans  
¬p v ¬q v r, ¬p v ¬q v r assoc.  
  
(q ∨ r ) → p, (q → p) ^ (r → p) triple implication    
¬(q v r) v p, (¬q v p ) ^ (¬r v p ) de morgan  
¬q ^ ¬r v p, (¬q v p ) ^ (¬r v p ) distributive  
(p v ¬q) ^ (p v ¬r), (¬q v p ) ^ (¬r v p ) communative  
(¬q v p ) ^ (¬r v p ), (¬q v p ) ^ (¬r v p )  
  
```Part 4```  
There is a city that all travelers lovebut everyone who lives there doesn’t love.  
∀x∀y((Traveler(x)∧City(y)∧Live(x,y))→¬Love(x,y))  
