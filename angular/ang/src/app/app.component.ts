import { Component, OnInit } from '@angular/core';
import { CommonModule } from '@angular/common';
import { HttpClient, HttpHeaders } from '@angular/common/http';
import { RouterOutlet } from '@angular/router';

@Component({
  selector: 'app-root',
  standalone: true,
  imports: [CommonModule, RouterOutlet],
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css'],
})
export class AppComponent implements OnInit {
  title = 'ang';
  users: any[] = [];
  responseData: any;

  constructor(private http: HttpClient) {}

  ngOnInit(): void {
    const payload = {
      username: 'shubham modi',
      email: 'shubham@example.com',
      password: '123456',
      adminId: '67c81cc2c2b8d44dddcdabef',
    };
    // 🔐 Your JWT token
    // const token = 'eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpZCI6IjY3Yzg0OTVmZjU1ZWMxOTg2NDE3NGQyOCIsInJvbGUiOiJ1c2VyIiwidXNlcm5hbWUiOiJ1c2VyMSIsImlhdCI6MTc0NDE5NTU0NiwiZXhwIjoxNzQ0ODAwMzQ2fQ.1KTzon4V8_avsYQya8q8eWgOltqHXbadPUJkaRORatw';

    // // 🛡️ Set headers
    // const headers = new HttpHeaders({
    //   'Content-Type': 'application/json',
    //   Authorization: `Bearer ${token}`,
    // });

    // ✅ GET request (no token needed)
    this.http
      .get<any[]>('https://jsonplaceholder.typicode.com/users')
      .subscribe((data) => {
        this.users = data;
      });

    // ✅ POST request with JWT token
    this.http
      .post<any>('https://fin-ctrl-1.onrender.com/users/registration', payload)
      .subscribe((data) => {
          this.responseData = data;
          console.log('POST response:', data);
        },
        (error) => {
          console.error('POST error:', error);
        }
      );
  }
}
