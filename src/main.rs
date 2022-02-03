fn readln() -> String {
    use std::io::stdin;
    let mut buf = String::new();
    stdin().read_line(&mut buf).unwrap();
    buf = buf.trim().to_string();
    buf
}

fn main(){
    let var = readln();

    println!("The value is {var}");
}