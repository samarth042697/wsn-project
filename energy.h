 /*Each sensor node consumes ETx amount of energy to transmit a l bits packetover distance d.*/
/*ERx for reception, where Eelec is the energy dissipated on circuit, and fs  and mp are free space and multi-path fading channel parameters respectively.*/
#include<stdio.h>
#include<string.h>
#include<math.h>{
	
void Energy_transmit(l,d,e){

        if(d<d0){

	          E1=(l*e)+(l*c1*(d**2));
}
   
         else{

  	     if(d>=d0)
                
                E1=(l*e)+(l*c2*(d**4));
  }
        return E1;


}
void Energy_receive(l){

	E2= (e*l);
	         return E2;
}
  
 void Cluster_formation(l,d,e){

       if(d<d0){

	          E3=(l*e)+(l*c1*(d(CH,BS)**2));
         }
   
         else{

  	     if(d>=d0)
                
                E3=(l*e)+(l*c1*(d(CH,BS)**2));
  }
        return E3;

}
    void Send_Data_to_CH(l,d,e){

    	if(d<d0){

	          E4=(l*e)+(l*c1*(d(S,CH)**2));
         }
   
         else{

  	     if(d>=d0)
                
                E4=(l*e)+(l*c1*(d(S,CH)**2));
  }
        return E4;

    }
      VOID relay_data(s1,s2,CHK){

             E5= Energy_transmit(l,d,s1,s2)+E2+Energy_transmit(l,d,s1,CHK);

      }
      






   }





