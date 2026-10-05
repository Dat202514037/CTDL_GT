Bài toán Tháp Hà Nội
    Bài toán: chuyển chồng đĩa từ A sang B, mỗi lần chỉ được chuyển 1 đĩa, Không được đĩa to trên đĩa nhỏ, dù chỉ tạm thời, Được phép chuyển qua một cột trung gian C

    Các bước thực hiện đệ quy:
        Giả sử cột A ban đầu có n đĩa 
        Chuyển n-1 đĩa từ cột A sang cột trung gian C
        Chuyển đĩa dưới cùng từ cột A sang cột B
        Chuyển n-1 đĩa từ cột C về cột B

    Test case 1:
    input: n = 2
    output:
    Chuyen dia 1 tu cot A sang cot C
    chuyen dia 2 tu cot A sang cot B
    Chuyen dia 1 tu cot C sang cot B

    Test case 2:
    input: n = 3
    output: 
    Chuyen dia 1 tu cot A sang cot B
    chuyen dia 2 tu cot A sang cot C
    Chuyen dia 1 tu cot B sang cot C
    chuyen dia 3 tu cot A sang cot B
    Chuyen dia 1 tu cot C sang cot A
    chuyen dia 2 tu cot C sang cot B
    Chuyen dia 1 tu cot A sang cot B


