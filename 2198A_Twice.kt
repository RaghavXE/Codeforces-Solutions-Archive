fun main(){
    var t = readLine()!!.toInt()
    while(t-- > 0){
        var n = readLine()!!.toInt()
        var list = readLine()!!.split(" ").map { it.toInt() }.toMutableList()
    

        var diff = 0
        val counter = mutableMapOf<Int,Int>()
        for(i in list){
            counter[i] = counter.getOrDefault(i,0)+1
        }
        for(v in counter.values){
            // var v = counter[i]
            if(v % 2 != 0){
                diff += (v-1)/2
            }
            else{
                diff += v/2
            }
        }
        println(diff)

        
    }
}