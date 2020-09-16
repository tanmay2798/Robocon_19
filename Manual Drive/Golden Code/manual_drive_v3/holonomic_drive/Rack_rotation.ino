void rack_init(){
  pinMode(rack_1_pin_grip,OUTPUT);
  pinMode(rack_1_pin_lift,OUTPUT);
  pinMode(rack_2_pin,OUTPUT);
  digitalWrite(rack_1_pin_grip,LOW);
  digitalWrite(rack_1_pin_lift,LOW);
  digitalWrite(rack_2_pin,LOW);
}

void rack_1_grip(){
  if (rack_1_state==true){
    digitalWrite(rack_1_pin_lift,HIGH);
    delay(400);
    digitalWrite(rack_1_pin_grip,HIGH);
  }
  else {
    digitalWrite(rack_1_pin_grip,LOW);
    delay(400);
    digitalWrite(rack_1_pin_lift,LOW);
  }
}

void rack_2_grip(){
  if (rack_2_state==true){
    Serial.println("rack_2");
    digitalWrite(rack_2_pin,HIGH);
  }
  else {
    digitalWrite(rack_2_pin,LOW);
  }
}

/*void rack_1_rotate(){
  if (rack_rotate == 1){
    if(!rack_fine_control)
    {
     rack_st.motor(2,rack_w/2);
    } 
    else
    {
      rack_st.motor(2,rack_w/8);
    }  
  }
  else if (rack_rotate == 2){  
    if(!rack_fine_control)
    {
     rack_st.motor(2,-rack_w/2);
    }
    else
    {
      rack_st.motor(2,-rack_w/8);
    }
    
  }
  else{
    rack_st.motor(2,0);
  }
}*/


void rack_1_rotate(){
  if (rack_rotate == 1){
     rack_st.motor(2,rack_w/2);
   
  }
  else if (rack_rotate == 2){    
     rack_st.motor(2,-rack_w/2);  
  }
  else{
    rack_st.motor(2,0);
  }
}

