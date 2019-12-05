import { Injectable } from '@angular/core';
import { HttpClient } from '@angular/common/http';

@Injectable({
  providedIn: 'root'
})
export class DataFetchService {

  constructor(public http: HttpClient) { }
  getData()
  {
    return this.http.get("http://localhost:4000/employees");
  }

  updateData(No)
  {
    return this.http.get("http://localhost:4000/employees"+No);
  }
}
