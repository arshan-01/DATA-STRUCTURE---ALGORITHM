function calcTot(merchTot) {
       var orderTot;
       if (merchTot >= 100) {
       orderTot = merchTot;
       }
       else if (merchTot < 50.01) {
       orderTot = merchTot + 5;
       }
       else {
           orderTot = merchTot + 5 + (.03 * (merchTot - 50));
           }
           return orderTot;
           }

    console.log(calcTot(75));
