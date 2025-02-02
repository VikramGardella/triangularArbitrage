
---

### **About**  
This C++ program leverages **triangular arbitrage** across **decentralized cryptocurrency exchanges** to exploit **relative transaction rate discrepancies** for profit. By automating a high volume of **small, rapid transactions**, the system aims to capitalize on fleeting price inefficiencies between trading pairs in real time.  

Key Features:  
- **Real-time price monitoring** across multiple exchanges  
- **Automated trade execution** for rapid transactions  
- **Risk mitigation strategies** to minimize exposure  
- **Optimized C++ implementation** for speed and efficiency  

---

### **README**  

# **Triangular Arbitrage Crypto Bot**  

## **Overview**  
This project is a **C++-based trading bot** designed to execute **triangular arbitrage** across decentralized cryptocurrency exchanges. It identifies and exploits **rate discrepancies** between three currency pairs, executing a rapid sequence of trades to generate profit before price fluctuations close the opportunity.  

### **How It Works**  
1. **Scan multiple exchanges** for trading pair discrepancies.  
2. **Identify profitable triangular arbitrage cycles** (e.g., BTC → ETH → USDT → BTC).  
3. **Execute transactions in rapid succession** to lock in profit.  
4. **Repeat the process continuously**, adapting to real-time market conditions.  

### **Technical Highlights**  
- **Low-latency execution** via optimized C++ threading  
- **Exchange API integration** for real-time data retrieval  
- **Dynamic risk management** to prevent slippage and losses  
- **Scalability** to support multiple trading pairs simultaneously  

### **Installation & Usage**  
1. Clone the repository:  
   ```sh
   git clone <repo-url>
   cd triangularArbitrage-main
   ```  
2. Install dependencies:  
   ```sh
   sudo apt-get install libcurl4-openssl-dev  
   ```  
3. Compile the program:  
   ```sh
   g++ -o arbBot main.cpp -lcurl -lpthread  
   ```  
4. Run the bot:  
   ```sh
   ./arbBot  
   ```  

### **Disclaimer**  
This software is for educational purposes only. Cryptocurrency trading involves significant financial risk, and **use at your own discretion**.  

---  
