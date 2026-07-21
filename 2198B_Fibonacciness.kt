fun main(){
    var t = readLine()!!.toInt()
    while(t-- > 0){
        val arr = readLine()!!.split(" ").map{it.toInt()}.toMutableList()
        val fblist = mutableListOf<Int>()
        var a = arr[0] + arr[1]
        fblist.add(func(a, arr))
        a = arr[2] - arr[1]
        fblist.add(func(a, arr))
        a = arr[3] - arr[2]
        fblist.add(func(a, arr))
        println(fblist.maxOrNull())

    }
}

fun func(c:Int, arr: MutableList<Int>): Int{
    var fb = 0
    arr.add(2,c)
    for(i in 0 until 3){
        if(arr[i] + arr[i+1] == arr[i+2]){
            fb++
        }
    }
    arr.removeAt(2)
    return fb
}