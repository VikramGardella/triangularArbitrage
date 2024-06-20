#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include "token.h"
#include "conversion.h"
//#include <curl/curl.h>

using namespace std;

void initializeWebsockets(){
    //@Aamer can you please redo the part you did for this in python but in C++, bro?
}

void updatePrices(){
    //Also, I think we should maybe make the tokens (won't for their tokens because of accessors) global variables for this
}

void findMostProfitable(vector<token> coins) {
    double feeRate = 0.001;
    double maxProfit = 0;
    vector<int> bestPathIndices(3); // Initialize with size 3
    vector<string> bestPathExchanges(3);

    int numTokens = coins.size();

    // Evaluate all possible triangular paths
    for (int i = 0; i < numTokens; i++) {
        for (int j = 0; j < numTokens; j++) {
            if (i == j) { continue; }
            for (int k = 0; k < numTokens; k++) {
                if (j == k || i == k) { continue; }
                // Initial amount of 1 unit of the first token (i)
                double initialAmount = 1;
                /*
                // Perform the three trades
                double amountAfterFirstTrade = initialAmount * rm[i][j] * (1 - feeRate);
                double amountAfterSecondTrade = amountAfterFirstTrade * rm[j][k] * (1 - feeRate);
                double finalAmount = amountAfterSecondTrade * rm[k][i] * (1 - feeRate);

                // Calculate profit
                double profit = finalAmount - initialAmount;

                // Check if this path is the most profitable
                if (profit > maxProfit) {
                    maxProfit = profit;
                    bestPathIndices[0] = i;
                    bestPathIndices[1] = j;
                    bestPathIndices[2] = k;
                }*/
            }
        }
    }
    
    maxProfit = round(maxProfit * 10000) / 100.0;
}

int main(){

    token btc = token("BTC");
    token eth = token("ETH");
    token ltc = token("LTC");
    token sol = token("SOL");
    token xrp = token("XRP");

    //Initializing BTC conversions
    conversion btceth = conversion("BTCETH", 0.06, &eth);
    btc.addPath(btceth);
    conversion btcltc = conversion("BTCLTC", 0.12, &ltc);
    btc.addPath(btcltc);
    conversion btcsol = conversion("BTCSOL", 0.07, &sol);
    btc.addPath(btcsol);
    conversion btcxrp = conversion("BTCXRP", 0.18, &xrp);
    btc.addPath(btcxrp);

    //Initializing ETH conversions
    conversion ethbtc = conversion("ETHBTC", 16.67, &btc);
    eth.addPath(ethbtc);
    conversion ethltc = conversion("ETHLTC", 2.0, &ltc);
    eth.addPath(ethltc);
    conversion ethsol = conversion("ETHSOL", 1.18, &sol);
    eth.addPath(ethsol);
    conversion ethxrp = conversion("ETHXRP", 3.0, &xrp);
    eth.addPath(ethxrp);

    //Initializing LTC conversions
    conversion ltcbtc = conversion("LTCBTC", 8.33, &btc);
    ltc.addPath(ltcbtc);
    conversion ltceth = conversion("LTCETH", 0.5, &eth);
    ltc.addPath(ltceth);
    conversion ltcsol = conversion("LTCSOL", 0.6, &sol);
    ltc.addPath(ltcsol);
    conversion ltcxrp = conversion("LTCXRP", 1.5, &xrp);
    ltc.addPath(ltcxrp);

    //Initializing SOL conversions
    conversion solbtc = conversion("SOLBTC", 14.29, &btc);
    sol.addPath(solbtc);
    conversion soleth = conversion("SOLETH", 0.85, &eth);
    sol.addPath(soleth);
    conversion solltc = conversion("SOLLTC", 1.67, &ltc);
    sol.addPath(solltc);
    conversion solxrp = conversion("SOLXRP", 2.5, &xrp);
    sol.addPath(solxrp);

    //Initializing XRP conversions
    conversion xrpbtc = conversion("XRPBTC", 5.56, &btc);
    xrp.addPath(xrpbtc);
    conversion xrpeth = conversion("XRPETH", 0.33, &eth);
    xrp.addPath(xrpeth);
    conversion xrpltc = conversion("XRPLTC", 0.67, &ltc);
    xrp.addPath(xrpltc);
    conversion xrpsol = conversion("XRPSOL", 0.4, &sol);
    xrp.addPath(xrpsol);
    

    return(0);
}


