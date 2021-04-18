void Backward(){
   digitalWrite(dir11,LOW);
      digitalWrite(dir12,HIGH);
      analogWrite(en1,250);
      digitalWrite(dir21,LOW);
      digitalWrite(dir22,HIGH);
      analogWrite(en2,250);
      digitalWrite(dir31,LOW);
      digitalWrite(dir32,HIGH);
      analogWrite(en3,250);
      digitalWrite(dir41,LOW);
      digitalWrite(dir42,HIGH);
      analogWrite(en4,250);}
void Right()
{     digitalWrite(dir11,HIGH);
      digitalWrite(dir12,LOW);
      analogWrite(en1,200);
      digitalWrite(dir21,HIGH);
      digitalWrite(dir22,LOW);
      analogWrite(en2,0);
      digitalWrite(dir31,HIGH);
      digitalWrite(dir32,LOW);
      analogWrite(en3,200);
      digitalWrite(dir41,HIGH);
      digitalWrite(dir42,LOW);
      analogWrite(en4,0);
 }    
void Left()
{     digitalWrite(dir11,HIGH);
      digitalWrite(dir12,LOW);
      analogWrite(en1,0);
      digitalWrite(dir21,HIGH);
      digitalWrite(dir22,LOW);
      analogWrite(en2,200);
      digitalWrite(dir31,HIGH);
      digitalWrite(dir32,LOW);
      analogWrite(en3,0);
      digitalWrite(dir41,HIGH);
      digitalWrite(dir42,LOW);
      analogWrite(en4,200);
}   

void allRight()
{     digitalWrite(dir11,HIGH);
      digitalWrite(dir12,LOW);
      analogWrite(en1,200);
      digitalWrite(dir21,LOW);
      digitalWrite(dir22,HIGH);
      analogWrite(en2,50);
      digitalWrite(dir31,HIGH);
      digitalWrite(dir32,LOW);
      analogWrite(en3,200);
      digitalWrite(dir41,LOW);
      digitalWrite(dir42,HIGH);
      analogWrite(en4,50);
 }    
void allLeft()
{     digitalWrite(dir11,LOW);
      digitalWrite(dir12,HIGH);
      analogWrite(en1,50);
      digitalWrite(dir21,HIGH);
      digitalWrite(dir22,LOW);
      analogWrite(en2,200);
      digitalWrite(dir31,LOW);
      digitalWrite(dir32,HIGH);
      analogWrite(en3,50);
      digitalWrite(dir41,HIGH);
      digitalWrite(dir42,LOW);
      analogWrite(en4,200);
}   
void Forward()
{     digitalWrite(dir11,HIGH);
      digitalWrite(dir12,LOW);
      analogWrite(en1,250);
      digitalWrite(dir21,HIGH);
      digitalWrite(dir22,LOW);
      analogWrite(en2,250);
      digitalWrite(dir31,HIGH);
      digitalWrite(dir32,LOW);
      analogWrite(en3,250);
      digitalWrite(dir41,HIGH);
      digitalWrite(dir42,LOW);
      analogWrite(en4,250);
 }
 void Stop()
 {    digitalWrite(dir11,LOW);
      digitalWrite(dir12,LOW);
      analogWrite(en1,0);
      digitalWrite(dir21,LOW);
      digitalWrite(dir22,LOW);
      analogWrite(en2,0);
      digitalWrite(dir31,LOW);
      digitalWrite(dir32,LOW);
      analogWrite(en3,0);
      digitalWrite(dir41,LOW);
      digitalWrite(dir42,LOW);
      analogWrite(en4,0);
 }
