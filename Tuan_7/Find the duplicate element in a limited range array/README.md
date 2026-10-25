# Find the duplicate element in a limited range array

## Mô tả bài toán
- Đầu vào: Mảng số nguyên gồm n phần tử.
- Đầu ra: Phần tử bị trùng lặp trong mảng.

## Mô tả giải thuật
- Nhập số lượng phần tử $n$ và các phần tử của mảng.
- Khởi tạo biến count = 0 để đếm số lần phát hiện cặp phần tử trùng nhau.
- Sử dụng vòng lặp ngoài với biến i chạy từ 0 đến n - 1.
- Với mỗi phần tử a[i], sử dụng vòng lặp trong với biến j chạy từ i + 1 đến n - 1 để so sánh a[i] với các phần tử đứng sau nó.
    - Nếu a[i] == a[j], in ra giá trị phần tử trùng lặp và tăng count lên 1.
- Sau khi chạy hết hai vòng lặp, nếu count vẫn bằng $0$, in thông báo không tìm thấy phần tử trùng lặp.

**Độ phức tạp thuật toán $O(n^2)$**

## Test case
### Case 1:
#### Input:
```
nhap so phan tu cua mang: 5
nhap tung phan tu cho mang: 1 2 3 4 4
```
#### Output:
```
Pair found (3, 6)
Pair found (5, 4)
```
### Case 2:
#### Input:
```
nhap so phan tu cua mang: 7
nhap tung phan tu cho mang: 8 3 6 2 5 2 4
tong = 6
```
#### Output:
```
Pair found (2, 4)
Pair found (2, 4)
```
### Case 3:
#### Input:
```
nhap so phan tu cua mang: 7
nhap tung phan tu cho mang: 8 3 6 2 5 2 4
tong = 15
```
#### Output:
```
pair not found
```
