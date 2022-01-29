fn readln() -> String {
    use std::io::stdin;
    let mut buf = String::new();
    stdin().read_line(&mut buf).unwrap();
    buf = buf.trim().to_string();
    buf
}

fn main(){
    println!("Type your name: ");

    let mut name = readln();

    println!("Hello {}!", name);
}
