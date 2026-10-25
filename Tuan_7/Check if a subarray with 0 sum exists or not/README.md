# Check if a subarray with 0 sum exists or not

## Mô tả bài toán
- Đầu vào: Một mảng số nguyên gồm $n$ phần tử.
- Đầu ra:
    - In ra màn hình "Subarray exists" nếu trong mảng có tồn tại ít nhất một mảng con mà tổng các phần tử bằng $0$.
    - Nếu không tìm thấy bất kỳ mảng con nào thỏa mãn, in ra "subarray not found".  
- Lưu ý: Các phần tử trong mảng con phải đứng liền kề nhau (chiếm các vị trí liên tiếp trong mảng gốc).

## Mô tả giải thuật
- Sử dụng vòng lặp ngoài (biến i từ 0 đến n - 1) để chọn vị trí bắt đầu của mảng con.
- Tại mỗi điểm bắt đầu i, khởi tạo biến "tong" nhận giá trị bằng 0.
- Sử dụng vòng lặp trong (biến j từ i đến n - 1) để cộng dồn giá trị phần tử hiện tại vào tổng: tong += a[j].
- Kiểm tra điều kiện tổng bằng 0:
    - Nếu đúng: In ra màn hình "Subarray exists" (sử dụng lệnh return để thoát khỏi hàm ngay lập tức).
    - Nếu chạy hết toàn bộ hai vòng lặp mà không tìm được mảng con thỏa mãn điều kiện tổng bằng 0 , chương trình sẽ chạy đến câu lệnh cuối và in ra màn hình thông báo "subarray not found"

**Độ phức tạp thuật toán $O(n^2)$ (Worst Case)**

## Test case
### Case 1:
#### Input:
```
nhap so phan tu cua mang: 10
nhap tung phan tu cho mang: 3 4 -7 3 1 3 1 -4 -2 -2
```
#### Output:
```
Subarray exists 
```
---
### Case 2:
#### Input:
```
nhap so phan tu cua mang: 10
nhap tung phan tu cho mang: 0 4 -7 3 1 3 0 -4 -2 -2 
```
#### Output:
```
Subarray exists
```
---
### Case 3:
#### Input:
```
nhap so phan tu cua mang: 10
nhap tung phan tu cho mang: 3 4 7 3 1 3 1 4 2 2 
```
#### Output:
```
subarray not found
```
